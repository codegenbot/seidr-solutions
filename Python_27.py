def check():
    def modify_string(string):
        return "".join(char.lower() if char.isupper() else char.upper() for char in string)
    
    return modify_string

check()