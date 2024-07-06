def solution(): 
    lst = input("Enter numbers separated by space: ").split()
    return sum(int(i) for i in lst[1::2] if int(i) > 1 and int(i) % 2 != 0)