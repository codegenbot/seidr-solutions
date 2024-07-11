```
def double_the_difference(list1, list2):
    difference = abs(max(list1) - min(list2))
    return difference * 2

def main():
    list1 = input("Enter list1 elements separated by space: ").split()
    list2 = input("Enter list2 elements separated by space: ").split()
    list1 = [int(i) for i in list1]
    list2 = [int(i) for i in list2]
    print(double_the_difference(list1, list2))

if __name__ == "__main__":
    main()