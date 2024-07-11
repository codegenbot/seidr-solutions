```
def sort_even(l):
    return sorted([x for x in l if x % 2 == 0])

def task_description():
    while True:
        num_list = input().split()
        try:
            num_list = [int(i) for i in num_list]
            print(sort_even(num_list))
            break
        except ValueError:
            print("Please enter integers. Try again!")

if __name__ == "__main__":
    task_description()