
def cycpattern_check(a , b):
    """You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word
    cycpattern_check("abcd","abd") => False
    cycpattern_check("hello","ell") => True
    cycpattern_check("whassup","psus") => False
    cycpattern_check("abab","baa") => True
    cycpattern_check("efef","eeff") => False
    cycpattern_check("himenss","simen") => True

    
    a = a.lower()
    b = b.lower()

    # If length of b is greater than length of a, return False.
    if len(b) > len(a):
        return False
    
    # If a contains b, return True.
    if a.find(b) != -1:
        return True
    
    # If a does not contain b, check if any rotation of b is a substring of a.
    else:
        
        # Find the length of the rotation.
        rotation_len = len(b) - 1
        
        # Find the last letter of b.
        last_letter = b[-1]
        
        # Find the index of the last letter of b.
        last_letter_index = a.find(last_letter)
        
        # Find the index of the first letter of the rotation.
        first_letter_index = last_letter_index - rotation_len
        
        # If the index of the first letter < 0, add the length of a to get the actual index.
        if first_letter_index < 0:
            first_letter_index += len(a)
            
        # Find the rotation.
        rotation = a[first_letter_index : last_letter_index + 1]
        
        # Check if rotation is a substring of a.
        if a.find(rotation) != -1:
            return True
        
        # If a does not contain b or any of its rotation, return False.
        else:
            return False
    """
