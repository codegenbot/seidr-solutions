def Strongest_Extension(class_name, extensions):
    def strength(extension):
        return extension.count('A') + extension.count('B') + extension.count('C') - extension.count('a') - extension.count('b') - extension.count('c')
    
    strongest_extension = max(extensions, key=lambda x: strength(x))
    return f"{class_name}.{strongest_extension}"