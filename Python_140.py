```
def fix_spaces(s):
    return s.replace(" ", "")

def check(fixer, s):
    return fixer(s)

print(check(fix_spaces, "   Hello World!   "))