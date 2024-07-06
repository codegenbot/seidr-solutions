Here is the completed code:

def fruit_distribution(s,n):
    words = s.split()
    num_apples = int(''.join([word for word in words if 'apples' in word]).split(' ')[0])
    return n - num_apples - int(''.join([word for word in words if 'oranges' in word]).split(' ')[0])