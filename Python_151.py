def double_the_difference(lst):
    if len(lst) > 0:
        if len(set(lst)) > 1:
            elif len(lst) <= 1 or (len(set(lst)) == 1 and any(i % 2 != 0 for i in lst)):
                return "Program did not receive expected input"
            else:
                return (max(lst) - min(lst)) * 2
        else:
            return None


def check():
    while True:
        try:
            numbers = list(map(int, input("Enter space-separated numbers: ").split()))
            if len(numbers) > 0:
                break
        except ValueError:
            print("Invalid input. Please enter space-separated numbers.")

    print(double_the_difference(numbers))


check()