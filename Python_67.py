s = input("Enter a sentence: ")
n = int(input("Enter a number: "))
if n <= 0 or not any(c in "oa" for c in s if c != " "):
    print("Program did not receive expected input")
else:
    n -= sum(int(d) for d in "".join(filter(str.isdigit, s)))