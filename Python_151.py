```Python
def double_the_difference(lst):
    if len(set(lst)) > 1:
        return (max(lst) - min(lst)) * 2
    else:
        return None


def check():
    default_number = 0
    while True:
        try:
            numbers = list(map(int, input("Enter space-separated numbers: ").split()))
            if len(numbers) > 0:
                print(double_the_difference([default_number] + numbers))
                break
        except ValueError:
            print("Invalid input. Please enter space-separated numbers.")

check()