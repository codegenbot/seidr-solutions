```
def search(lst):
    max_num = -1
    for num in lst:
        if isinstance(num, int) and num > 0:  
            max_num = max(max_num, num)
        elif num < 0:  
            break
    return max_num


lst = input("Enter numbers separated by space: ")
try:
    lst = [int(i) for i in lst.split()]
except ValueError:
    print("Invalid input. Please enter numbers separated by spaces.")
    exit()
print(search(lst))