def get_max_triples(n):
    return n * (n + 1) // 2 * 2

n = int(input("Enter a number: "))
print(get_max_triples(n))