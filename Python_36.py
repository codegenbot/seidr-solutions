def fizz_buzz(limit=100):
    return ['FizzBuzz' if (i) % 15 == 0 else 'Fizz' if (i) % 3 == 0 else 'Buzz' if (i) % 5 == 0 else i for i in range(limit)]

print('\n'.join(str(i) for i in fizz_buzz(100)))