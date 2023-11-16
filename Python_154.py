
def cycpattern_check(a , b):
    """You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word
    cycpattern_check("abcd","abd") => False
    cycpattern_check("hello","ell") => True
    cycpattern_check("whassup","psus") => False
    cycpattern_check("abab","baa") => True
    cycpattern_check("efef","eeff") => False
    cycpattern_check("himenss","simen") => True

	if a == b:
		return True
	elif len(b) > len(a):
		return False
	else:
		for i in range(len(a)):
			if a[i] == b[0]:
				for j in range(len(b)):
					if a[(i+j)%len(a)] != b[j]:
						break
					elif j == len(b) - 1:
						return True
		return False
    """
