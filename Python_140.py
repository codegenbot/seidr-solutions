def fix_spaces(s):
    words = s.split()
    new_s = ' '.join(words)
    return new_s

def check(function, arg):
    result = function(arg)
    return len(result)

check(fix_spaces("   Hello World!   "))