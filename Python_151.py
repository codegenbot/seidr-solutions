```
def double_the_difference(your_list_here):
    max_val = max(your_list_here)
    min_val = min(your_list_here)
    return (max_val - min_val) * 2

def check():
    your_list_here = [1, -2, 3, 4, -5]
    result = double_the_difference(your_list_here)
    print(result)

check()