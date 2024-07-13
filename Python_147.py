def get_max_triples(n):
    return n * (n + 1) // 2 * (n - 2) // 3

n = int(input("Enter a number: "))
print(get_max_triples(n))