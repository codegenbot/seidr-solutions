def factorize(number):
    factors = []
    for i in range(1, number + 1):
        if number % i == 0:
            factors.append(i)
    return factors

try:
    number = int(input())
    print(factorize(number))
except Exception as e:
    print("Error reading input:", e)