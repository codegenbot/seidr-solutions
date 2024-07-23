import re
def fruit_distribution(s,n):
    s = s.replace("apples and ","")
    s = s.replace("oranges","")
    return n - int(re.sub(r'[a-z\s]+', '', s).strip())