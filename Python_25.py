def calculate_factors():
    num = int(input("Enter a number: "))
    factors = []
    for i in range(1, num + 1):
        if num % i == 0:
            factors.append(i)
    print("Factors of {} are {}".format(num, ", ".join(map(str, factors))))