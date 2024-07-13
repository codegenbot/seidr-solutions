```
def check():
    numbers = list(map(int, input("Enter space-separated numbers: ").split()))
    print(double_the_difference(numbers))

def double_the_difference(numbers):
    return (max(numbers) - min(numbers)) * 2 if len(set(numbers)) > 1 else None

check()