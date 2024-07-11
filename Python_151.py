```
def double_the_difference(your_list_here):
    min_num = min(your_list_here)
    max_num = max(your_list_here)
    difference = abs(max_num - min_num)
    result = difference * 2
    return result

def check():
    your_list_here = [1, -2, 3, 4, -5]
    result = double_the_difference(your_list_here)
    print(result)

check()