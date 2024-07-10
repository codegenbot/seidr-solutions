```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def find_indices(text, target):
    indices = []
    target_length = len(target)
    i = 0
    while i < len(text):
        pos = text.find(target, i)
        if pos == -1: 
            break
        indices.append(pos)
        i += target_length + 1
    return indices


print(gcd(1, 1))
print(find_indices("abcdefabc", "abc"))

print(gcd(4, 400000))
print(find_indices("hello world hello", "hello"))

print(gcd(54, 24))
print(find_indices("mississippi mississippi", "issi"))

print(gcd(4200, 3528))
print(find_indices("aaabbbccc aaaa bbbb ccc", "abc"))

print(gcd(820000, 63550))
print(find_indices("aaaaaa bbb cc ddd eee fff ggg hhh iii jjj kkk lll mmm nnn ooo ppp qqq rrr sss ttt uuu vvv www xxx yyy zzz", "abc"))