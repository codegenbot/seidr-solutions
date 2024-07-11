def add(x: int, y: int):
    return x + y

if __name__ == "__main__":
    x = int(input("Enter the first number: "))
    y = int(input("Enter the second number: "))
    
    result = add(x, y)
    print("The sum is:", result)