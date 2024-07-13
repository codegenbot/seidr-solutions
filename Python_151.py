def double_the_difference(lst):
    if len(set(lst)) > 1:
        return (max(lst) - min(lst)) * 2
    else:
        return None


def check():
    while True:
        try:
            first_num = int(input("Enter the first number: "))
            second_num = int(input("Enter the second number: "))
            numbers = [first_num, second_num]
            break
        except ValueError:
            print("Invalid input. Please enter two integers.")

    if len(numbers) < 2:
        return None

    print(double_the_difference(numbers))


check()