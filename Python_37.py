```
def sort_even(l):
    return sorted([x for x in l if isinstance(x, int) and x % 2 == 0])

def task_description():
    num_list = [int(i) for i in input("Enter numbers separated by space: ").split()]
    print(sort_even(num_list))

if __name__ == "__main__":
    task_description()