def fizz_buzz(limit=100):
    return ['FizzBuzz' if i % 15 == 0 else 'Fizz' if i % 3 == 0 else 'Buzz' if i % 5 == 0 else str(i) for i in range(1, limit + 1)]

print('\n'.join(fizz_buzz(100)))