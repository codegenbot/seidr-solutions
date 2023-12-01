def Strongest_Extension(class_name, extensions):
    extensions.sort(key=lambda x: x.count('A') - x.count('a'), reverse=True)
    return class_name + '.' + extensions[0]