```
def double_the_difference(lst):
    difference = max(lst) - min(lst)
    double_diff = difference * 2
    return double_diff

def check(func, input_str):
    result = func(input_str.split())
    print(result)

if __name__ == "__main__":
    check(double_the_difference, input())