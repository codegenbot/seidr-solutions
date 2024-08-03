def main():
    lst = input("Enter a list of numbers (space separated): ").split()
    print(double_the_difference(lst))

def double_the_difference(lst):
    return sum(i**2 for i in map(int, filter(str.isdigit, lst)) if int(i) % 2 != 0)