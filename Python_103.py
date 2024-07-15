def main():
    n = int(input("Enter first number: "))
    m = int(input("Enter second number: "))
    print(rounded_avg(n, m))


def rounded_avg(a, b):
    avg = (a + b) / 2
    return round(avg)


main()