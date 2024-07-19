def Strongest_Extension(class_name, extensions):
    def strength(extension):
        upper_count = sum(1 for char in extension if char.isupper())
        lower_count = sum(1 for char in extension if char.islower())
        
        if upper_count > 0:
            return upper_count - lower_count
        elif lower_count > 0:
            return -lower_count
        else:
            return 0

    strongest_extension = max(extensions, key=lambda x: (strength(x), extensions.index(x)))
    return f"{class_name}.{strongest_extension}"