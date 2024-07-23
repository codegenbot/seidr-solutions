s = input("Enter a sentence: ")
n = int(input("Enter a number: "))
if len([c for c in s if c != " " and c not in "oa"]) < 2:
    print("Program did not receive expected input")
else:
    n -= sum(int(d) for d in "".join(filter(str.isdigit, s))) + sum(
        int(d)
        for d in "".join(
            filter(str.isdigit, [c for c in s if c != " " and c not in "oa"])
        )
    )