def solve(K=None):
    if K is None:
        K = int(input("Enter a number: "))
    result = str(K * ((N := int(input("Enter another number: "))) - 1) // K)
    return result