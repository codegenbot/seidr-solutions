s = input("Enter a sentence: ")
n = int(input("Enter a number: "))
n -= sum(int(d) for d in "".join(filter(str.isdigit, s))) + sum(
    int(d)
    for d in "".join(filter(str.isdigit, [c for c in s if c != " " and c not in "oa"]))
)