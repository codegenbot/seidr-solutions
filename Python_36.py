def fizz_buzz(limit=100):
    fizzbuzz_count = 0
    for i in range(1, limit + 1):
        if i % 15 == 0:
            fizzbuzz_count += 1
    return fizzbuzz_count

print(fizz_buzz(100000))