def fizz_buzz():
    n = int(input("Enter a number: "))
    total = 0
    for i in range(1, n+1):
        if i % 3 == 0 and i % 5 == 0:
            total += 1
    print(f"Number of FizzBuzz numbers up to {n}: {total}")