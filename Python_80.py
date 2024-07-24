```
seen = set()
def is_happy(n):
    while n != 1 and n not in seen:
        if '0' in str(n):  
            return False
        if str(n) in seen:
            return False
        seen.add(str(n))
        n = sum(int(digit) ** 2 for digit in str(n))
    return True

while True: 
    try:
        num = int(input("Enter a number: "))
        print(is_happy(num))
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")