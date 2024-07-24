```
def smallest_change(arr):
    str1 = ''.join(str(x) for x in arr)
    rev_str = str1[::-1]
    count = 0
    for i in range(len(str1)//2):
        if str1[i] != rev_str[len(str1)-i-1]:
            count += 1
    return count