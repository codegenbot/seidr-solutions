```Python
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            result.append(i)
    return result

print("""{} 
       {} 
       {} 
       {}
       """.format(gcd(1, 1), gcd(4, 400000), gcd(54, 24), gcd(4200, 3528), gcd(820000, 63550)))