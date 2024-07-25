try:
    a = int(input())
    b = int(input())
    c = int(input())
    print(a, b, c)
except ValueError:
    print("Error: Input format is incorrect. Please provide three integers line by line.")