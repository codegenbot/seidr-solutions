```
s = input("Enter a sentence: ")
n = input("Enter a number: ")

# Validation for sentence
if any(char not in "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ " for char in s):
    print("Program did not receive expected input")
else:
    # Convert string to integer
    n = int(n)
    
    # Validation for number
    if n < 0:
        print("Program did not receive expected input")
    else:
        n -= sum(int(d) for d in "".join(filter(str.isdigit, s))) + sum(
            int(d)
            for d in "".join(
                filter(str.isdigit, [c for c in s if c != " " and c not in "oa"])
            )
        )