```
def check():
    numbers = list(map(int, input("Enter space-separated numbers: ").split()))
    print((max(numbers) - min(numbers)) * 2)