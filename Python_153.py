def Strongest_Extension(class_name, extensions):
    strengths = [(extension, extension.count('A') - extension.count('a')) for extension in extensions]
    strengths.sort(key=lambda x: x[1], reverse=True)
    return f"{class_name}.{strengths[0][0]}"