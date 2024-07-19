s = input("Enter a string: ")

def is_happy(s):
    s = s.lower()
    seen = set()
    while len(s) > 1:
        if str(sum(int(i)**2 for i in s)) in seen:
            return False
        seen.add(str(sum(int(i)**2 for i in s)))
        s = str(sum(int(i)**2 for i in s))
    return True

print(is_happy(s))