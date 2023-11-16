
# def cycpattern_check(a , b):
#     """You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word
#     cycpattern_check("abcd","abd") => False
#     cycpattern_check("hello","ell") => True
#     cycpattern_check("whassup","psus") => False
#     cycpattern_check("abab","baa") => True
#     cycpattern_check("efef","eeff") => False
#     cycpattern_check("himenss","simen") => True
 
#     """

# def cycpattern_check(a , b):
#     """You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word
#     cycpattern_check("abcd","abd") => False
#     cycpattern_check("hello","ell") => True
#     cycpattern_check("whassup","psus") => False
#     cycpattern_check("abab","baa") => True
#     cycpattern_check("efef","eeff") => False
#     cycpattern_check("himenss","simen") => True

#     """
#     for i in range(len(b)):
#         if b[i:]+b[0:i] in a:
#             return True
#     return False



# print(cycpattern_check("abcd","abd"))
# print(cycpattern_check("hello","ell"))
# print(cycpattern_check("whassup","psus"))
# print(cycpattern_check("abab","baa"))
# print(cycpattern_check("efef","eeff"))
# print(cycpattern_check("himenss","simen"))





def cycpattern_check(a , b): 
    """You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word 
    cycpattern_check("abcd","abd") => False 
    cycpattern_check("hello","ell") => True 
    cycpattern_check("whassup","psus") => False 
    cycpattern_check("abab","baa") => True 
    cycpattern_check("efef","eeff") => False 
    cycpattern_check("himenss","simen") => True 

    """ 
    for i in range(len(b)): 
        if b[i:]+b[0:i] in a: 
            return True 
    return False 



print(cycpattern_check("abcd","abd")) 
print(cycpattern_check("hello","ell")) 
print(cycpattern_check("whassup","psus")) 
print(cycpattern_check("abab","baa")) 
print(cycpattern_check("efef","eeff")) 
print(cycpattern_check("himenss","simen")) 




def fibo(num):
    """You are given a number. You need to return the number of Fibonacci terms you will need to add to get that number

    # Write your code below
    #


print(fibo(3))
print(fibo(6))
print(fibo(8))
print(fibo(9))
print(fibo(10))
print(fibo(11))
print(fibo(12))
print(fibo(13))
print(fibo(14))
print(fibo(15))
print(fibo(16))
print(fibo(17))
    """
