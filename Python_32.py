def find_zero(x):
    if x > 0:
        return -1
    elif x < 0:
        return 1
    else:
        return 0

if __name__ == "__main__":
    while True:
        try:
            x = int(input("Enter a number: "))
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")

    print(find_zero(x))