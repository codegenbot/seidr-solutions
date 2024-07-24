```Python
def count_upper(s):
    count = 0
    for i in s:
        if i.isupper() and i.upper() in 'AEIOU':
            count += 1
    return count

s = input("Enter a string: ")
print(count_upper(s))