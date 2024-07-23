def check(func):
    print(func([int(input("Enter numbers separated by space: ")) for _ in range(int(input("How many numbers? ")))]))