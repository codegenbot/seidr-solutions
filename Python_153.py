def Strongest_Extension(class_name, extensions):
    def strength(ext):
        return ext.count(str.upper) - ext.count(str.lower)
    
    strongest_ext = max(extensions, key=lambda ext: strength(ext))
    return f"{class_name}.{strongest_ext}"