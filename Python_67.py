def fruit_distribution(s,n):
    s = s.replace(" apples and ","").replace(" oranges","")
    n = int(n)
    return n - int(''.join(filter(str.isdigit, s)).split()[0].replace('apples',"") - int(''.join(filter(str.isdigit, s)).split()[1].replace('oranges',""))