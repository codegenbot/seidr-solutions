def check():
    numbers = list(map(int, input("Enter space-separated numbers: ").split()))
    print(double_the_difference(numbers))

def double_the_difference(lst):
    return (max(lst) - min(lst)) * 2

check()