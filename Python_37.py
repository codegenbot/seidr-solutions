```
def sort_even(l: list):
    even_list = [i for i in l if i % 2 == 0]
    even_list.sort()
    return even_list


def check():
    numbers = [int(i) for i in input("Enter space-separated numbers: ").split()]
    print(sort_even(numbers))


if __name__ == "__main__":
    check()