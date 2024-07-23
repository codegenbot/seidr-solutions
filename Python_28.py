def find_first_even():
    num = int(input("Enter an integer: "))
    if num % 2 == 0:
        print(f"The first even number is {num}.")
    else:
        print(f"{num} is not the first even number.")